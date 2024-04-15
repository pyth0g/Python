import requests
email = input("Email > ")
url_all = [r"https://www.minnpost.com/wp-admin/admin-ajax.php",r"https://www.washingtonpost.com/newsletters/api/v1/user/enroll/"]
data_all = [{"minnpost_form_processor_mailchimp_nonce": "f5aa262a1d","user_id": "0","mailchimp_user_id": "","first_name": "","last_name": "","action": "newsletter_form","placement": "fullpage","redirect_url": "https://www.minnpost.com/newsletters/","groups_available": "all","groups_submitted[]": "04471b1571","groups_submitted[]": "94fc1bd7c9","groups_submitted[]": "68449d845c","email": email,"ajaxrequest": True,"subscribe": True},{"email":email,"newsletters":["1fdea1aa-98a4-4db1-a1c5-74e56b1e0ceb","ac73a580-46a8-4ac2-810f-6edd75f5dc73","256cd1ca-68bb-4325-a6d0-2f5e8d5c6f97","729af901-5d37-4e1c-96a8-b71a7b463574","d9c07ee8-4e06-4af1-b469-ccc590ebb90a","fdc82192-04a4-4b05-be5b-934dd251965a","1ff33e5a-60b5-4608-9758-753a30c674b3","0334c648-a31d-4fb5-ad5d-1c361db145ed","adb3b7cf-45a7-47c8-9644-0c3d7d26fb46","a06b00ae-ae3c-4e84-9014-bfc4368cba0b","9f0914e5-6e00-4d1a-b7c5-dccaddb0749f","39c6e183-7e71-479b-ad39-f516d4b9ca5b","a713f6c1-1484-47df-9a81-56a52ca317b8","3138dc7a-2fac-4ce7-b23a-be70c83fb8bf","2a7fa995-62e4-4d4f-853e-7ca9f0052ed6","934a961a-9c67-4564-b515-813f7827c036","d0c4f473-a0b8-48ab-b5d4-136eab65dea7","9d3df97f-407a-4d78-bfa6-5c4f9a0f03fe","c61969bb-9b1c-4ec4-a9e9-7a7624a83ebb","1a385e00-89b3-4eab-bc0a-5c0d7c369430","9e31994e-dcee-4577-9bf5-db45476146e8","4d108070-8d3b-4ff6-b8cd-4a565f77e4ff","f765a8cc-3025-4d32-8a64-4cfc264933e2","2f9ca259-9130-4312-b073-ac3ba9570e01","20977edb-a332-4c16-aeca-a5ad92b34673","7d365424-d7e2-4f79-8a7c-4b378f0f7dee","aa9cc819-0857-450a-87b4-5c190721a602","d9cab9a6-df81-4dc4-89ca-583b54a3cde8","c332574d-c1cc-4874-bc3e-698b2e8206ad","7269dadb-82d3-4966-92b5-3325ee5ccce2","a0223352-5fa4-429c-9ae1-91f38a65667a","24a70620-1103-4e4b-989f-6c4a097416ca","889a1fdc-91b1-40db-924c-3a7a1e93131b","55651e01-a43e-4c34-acb0-d941d52cee2d","0800da0d-1445-41cf-8b97-240e1741fec5","29d869c0-a934-4fd8-8788-c8a809faf2b7","7e6c3245-8d85-4124-94eb-acd4ef2c2eec","9970f685-a482-4aeb-9f77-3c239d03d6a4","c8e50bc5-759e-4835-a8cf-01c7dd436355","ef9eb246-52bf-49e6-af4d-6276e2851edc","6576866d-fea0-41ca-bc91-6cee7ad91939","abe2e9a9-a52f-4c0a-92a1-9005b32190cf","ede392d9-3663-4d80-a396-32967e32f83f","5783f63e-5354-4dab-8b1a-399a23d1e0ec","75c2a3f2-40df-4aa0-942c-ab5f0aa2f9a8","1bfa0b6c-4373-4354-b627-15a4e239e378","891bca43-f06d-4988-9265-eb0684966e2e","5205043d-64d2-4a9a-bd23-5d5b11767686","aa51d651-906a-47b1-b988-931e03305ba4","c1f26715-b65f-4591-83c4-873723ec7764","8ae2d1e1-e4e8-4842-a68b-709ca1c4d59d","09749501-c618-44cc-9eb4-08613b6b0bfe","943452cb-5831-47a5-add0-874605bff183","08eb2bbf-a309-4bcd-85ac-67ee0c028f34","f40e56aa-a6c0-4328-9be1-a4e81fb75459","5a8d936f-c315-4c4a-ab06-f216303e6f31","6623eac9-431e-49be-9230-6a56c68bc9fd","02f6ecf9-d7e4-4860-a6a9-45fc2b5d276b","3cdb1ff6-93a7-4669-83bd-242f90fe6456","a129fb5f-917f-42a1-acfb-c8f852435e7d","8c54bc87-6639-4a5b-a2be-7ea755c050d1","1880d446-1414-4ae1-a604-f4787a6b2cc4","5e19e6ee-3e6e-400d-a739-d778094ea494","c2a6296f-0014-450a-a5ce-4bb4d7bb2b3f","25618836-6d8b-42e0-9442-c7d0668fd7a4","f37bf67d-cbd7-4eac-9f64-3eaed7846f09","57f737c9-c07a-4aa4-a6c9-63a4cf2ecb16","9ca8d1cd-c472-4efb-b899-48b64723d55a","8c697c08-b0e2-4dfd-88e6-3b82c73774b4","81a2a6a9-f4ce-421e-b4f7-04ec495caf2c","33494046-f559-4877-ab02-c89676e3ffea","e9bd696a-249e-40d6-a210-7c2d1a4fa5e5","e4ed9d4a-a5e1-4b43-b9e3-0267fcd7c770","6a68c460-f6a6-4be9-81c3-d5441092298e","cdca93bc-18b9-4a12-ab38-3b9f161604e1","c7eb4d1a-aed7-4a7a-8345-ef66bb7f0b68","956c192d-af48-4a1c-90f0-695385558baf","9e7683dd-e428-4f99-b291-d9527a518f7f","7b8ab926-0e4a-4fba-9b4d-34ed47edcc43","6ad7b95a-dfdf-4787-bfd1-3f3d61a10fa7","e2cb4cc5-ef2c-46e4-b45e-f4a902c83ade","80830d18-536d-49b9-8826-c45602e2acee","dd844484-4250-4cfa-b15b-4ede294b605b","ccd9c9e6-8ab0-4eda-b34f-ae4af53542fb","2b11e360-371c-483b-8003-35e5a8cb6ef4","4f3c841f-c6e9-4ed2-be1d-f2575425fde2","6e8893f0-5d7f-469e-803f-81d7e218a63c","d9beab69-1e34-4bf9-addb-ace12fef7935","1ce260c2-426b-48a2-a3c9-b7903ae41279","cc316c6a-fd38-447d-b208-68c53fd7a2d2","4025aac1-2407-4a29-a924-f58d542994b8","14f623d4-4e80-4382-a425-c22e198f8469","36850b37-10bc-43de-98a8-43b566d839f1","8a0d4a7d-98dd-4e0f-8d7b-e8273497a93b","21f8042b-60ad-49ad-9685-b46845d2c12c","ba9eb7aa-a227-4446-8d0c-ba4c2466ad30","21ec96ed-f630-42b4-a186-e51a1f7950a2","436f961a-6634-4a2f-9dbb-3878a2482d6c","ad2e9e0b-f4e5-4271-b0de-4b6b548ea71d","d6193f02-6cdd-480b-ab56-85d12fabad30","c5a876ed-1e71-459d-be3a-c257b1c36776","fa50d222-fcbb-4e20-b450-c49405e077d9","a0991f42-2dea-4381-9949-1fa4647e327b","3878cfa8-afde-4ee4-a1cf-b4d2005af218","39cd905f-0d42-47f2-bb76-08b14a085059","6350bbdd-f026-425d-98d1-db1360854003","9a427019-d03d-4cab-aef3-b5f5b589e726","79864f55-b823-44b6-aa8c-c7f0d6955f64","10ebb416-e6aa-424f-9924-5b4d5594fba6","eedcd46e-d7a4-4ba5-a8e6-02053e262ede","2971b97c-62df-48f5-9c1a-9c54516e84fe","78b963cd-5b8e-4168-a6d0-eb2477072626","bc90174a-69f1-4ca4-9b53-f133692d0e1f","1c8f655b-5437-44f6-a312-03c69f08c5ce","1a34eee4-a5f1-4870-9de3-0503d1f0d0e8","8373d844-6486-4140-9867-eb7f386305c3","63237882-f3b4-4a82-82d2-92ea8ec796f6","f2d35270-f7c5-435e-9cc2-750e2fcb1264","ddef61e2-4c8f-4da0-b5c1-6e2b68ae33df","16924d5c-94c8-4887-b937-861b1b5025f4","49ac4b64-8488-41f5-8a9e-62648917f704","82b5d032-a662-4252-85f1-ca16c1399c4e","4a828709-0a2f-4604-a6f5-199652472041"],"profile":{"method":"NMP","location":"","initiative":"","userAgent":"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/118.0.0.0 Safari/537.36"},"recaptchaToken":"03AFcWeA6-vePLsCeVTLoYBEHYdQkqygA9T5hetBnI28r7rkCh13dl56Tp6RpUb_1sHkuzr1XBezpl34mrNPuLqN_5AtQEUGIfereVIiZspabU_BeZLynHQiBQazDlq4gtan70jNPAaErC6KFMuijez9o_d9p6LZwN619T-fUlgfhq1pmqTER9uZ6ExuLwkiV_U53r9Jasf3WXRHeWzUHkKEvKOTKONr_fv-8cPndnFivOXvGd0UANI4oSkWLb7o5k6Bu2L9cTineAP7ECm2-lz58PCHcHXjqv7hni21Af2owgJoUcgzle-Qv1Bibo2-NoGKyGy1Sm-NsVCvnYnrB0x9hAhDxR0IokjVW9werox2nB2-p9jDqY27I0v0e1agngUDR168cVWWNdOidlp-qKWXkTOpytA22zQUmyDxIjb3ndipEVkQXVMcxgRXRPryNvL7hleyt31Bc47ZEVhmRvIp7TZl1k8ZHhbbpOsQNtREyMY7udV_q_iqkvdLzXzc2EIsVvUi7sjyOUBPPhH7lEV5KeXzKOLPcUyJiPiPpI2JAqyakrZvT7x_zoVnx0b0njdE6sSPkTsFX65dILXVoljpSm9FArzI_aV0shJGhGoW14pE3sU-W7t3hNuB0ICTj-C7tVnA1G3cadrqM7NajioUtQY4C5eo_cp_xl024i6J2XnytnYoEehCDIVDdKu38RgVEhnOSZGfD5jGteVDxqgxhAgYmI589OhKoMKN22e9ju0ZcVjhgYWSq7LAUCCPtwGY7DVZMCJWuIoHqRMp9DiOSTuBa2y8Y9P9-qRG-E49xqE67VcS-cCdkonGhhBeuDiOcULHDZv8Hcr1CmHnCuym8sCbcGDJ2pJx0oJPUFHtjeL4WEHrHL6MzfjMUh938naGMDMlro1rn-z9skv2qj1C-7hhjC2Jr0wxnCXLwoO6CqBcf4gVDZ0ncPjs-6G-9_YJRqF8Axgt64h9qnc3IijpzdrvRTRIEgfpoZXMG6dE2ZAeeIfZOlovB2JlqBeXJrOFWVciiaVF5F52ewepChD3xm4FNd2SvVqJpRiIatdiJ2TAWWh9xBr55FEIdtteZ_7ynFNkvp8N6hWo8LtWjIrFqr-YnALDeYu6ZWxqVXt1GOw7Q7yZytbUwYgEuE2e9DCZ0XiK_fblPoG7rKtT4Mn3EpHrXoh6Y-DOIKlgfAMyuhDktFQ8_VozHsaIQ0YLk_iLEuv2Hbh12Ipy-CJENcn6cqegYTgV7jaXl3EBdRHUxzLKZJzPQhZTkN-Fd8aEnY40tMuQEr7ecCNG2fdx9XMb3gQkS4dseIp1LzcrEETh7I6Mrr-Oxz4i_vLlVYHI0GOZMfO2RB1jU6GyaYdlqcstaHu3fIeBhxEGJUwJgHAnMprQXKaalxf56xrTfIIj7nNA9EAeJGDPj6mSCMP9VxQsaY-q7sL9-HR4OvVxNgGT7XewWh5-uxAdr0pawZZkIDm8wJG0_2ysnb0mXY2AFxYeffx3Ua2DwlQiv08QhlgM26ijsOJQwVg21wWi87iPYM4cXf4ny85sZ_"}]
for num in range(len(url_all)):
    request = requests.post(url_all[num],data=data_all[num]).text
    print(url_all[num])
    print("--------------")
    print(request)

print("SUCCESS!")