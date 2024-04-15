from nltk.corpus import stopwords
from nltk.tokenize import word_tokenize, sent_tokenize
from heapq import nlargest

class Summary():
    def summarize(text, num_sentences=3):
        sentences = sent_tokenize(text)
        words = word_tokenize(text)

        stop_words = set(stopwords.words('english'))
        words = [word for word in words if word.lower() not in stop_words]

        word_freq = {}
        for word in words:
            if word not in word_freq:
                word_freq[word] = 1
            else:
                word_freq[word] += 1

        sent_scores = {}
        for sentence in sentences:
            for word in word_tokenize(sentence.lower()):
                if word in word_freq:
                    if len(sentence.split(' ')) < 30:
                        if sentence not in sent_scores:
                            sent_scores[sentence] = word_freq[word]
                        else:
                            sent_scores[sentence] += word_freq[word]

        summary_sentences = nlargest(num_sentences, sent_scores, key=sent_scores.get)
        summary = ' '.join(summary_sentences)
        return summary