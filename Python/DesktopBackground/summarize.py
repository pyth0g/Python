import ollama

class Summary():
    def summarize(text, num_sentences=2):
        summary = ollama.chat(model="llama2", messages=[
        {
            'role': 'user',
            'content': f"Summarize this in {num_sentences} sentences: {text}",
        },
        ])

        if str(summary['message']['content']).count(".") > 6:
            return Summary.summarize(text,num_sentences)

        summary = str(summary['message']['content']).split("\n")

        if "\n".join(summary[2:]).split('\n\n')[0]:
            return "\n".join(summary[2:]).split('\n\n')[0]
        
        elif "\n".join(summary[2:]):
            return "\n".join(summary[2:])
        
        elif "\n".join(summary).split('\n\n')[0]:
            return "\n".join(summary).split('\n\n')[0]
        
        elif "\n".join(summary):
            return "\n".join(summary)
        
        return Summary.summarize(text,num_sentences)