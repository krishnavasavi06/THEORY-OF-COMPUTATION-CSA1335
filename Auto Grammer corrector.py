import language_tool_python
import nltk

def preprocess_text(text):
    # Tokenize text into sentences
    sentences = nltk.sent_tokenize(text)
    # Tokenize each sentence into words
    tokenized_sentences = [nltk.word_tokenize(sentence) for sentence in sentences]
    return tokenized_sentences

def correct_grammar(text):
    # Initialize LanguageTool
    tool = language_tool_python.LanguageTool('en-US')
    # Check grammar
    matches = tool.check(text)
    # Correct mistakes
    corrected_text = tool.correct(text)
    return corrected_text

def main():
    # Sample text with grammatical errors
    text = "this is a sample sentence with some grmmatical mistakes. I are very happy."
    # Preprocess text
    tokenized_sentences = preprocess_text(text)
    # Correct grammar
    corrected_text = correct_grammar(text)
    print("Original text:")
    print(text)
    print("\nCorrected text:")
    print(corrected_text)

if __name__ == "__main__":
    main()
