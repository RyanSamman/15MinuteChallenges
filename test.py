import re
from matplotlib.pyplot import sca
from wordcloud import WordCloud
import matplotlib.pyplot as plt

name = "Ryan S"
sentences = []
with open("chat.txt", "r", encoding="utf-8") as file:
	for line in file:
		sentences += re.findall(rf"(?={name}).*", line, flags=re.IGNORECASE)

sentences = [s.replace(f"{name}:", "") for s in sentences]

text = " ".join(sentences)

text = text.replace("Media", "")
text = text.replace("omitted", "")

wc = WordCloud(scale=10)
wc.generate(text)

plt.figure()
plt.imshow(wc, interpolation="bilinear")
plt.axis("off")
plt.show()
