using namespace std;

int main (int argc, char* argv[]) {
	char* filename;

    if (argc != 2) {
        cerr << "Invoke as : typeahead filename" << endl;
        return 0;
    }

    filename == argv[1];

    Parser* parser = new Parser(filename);

    vector<string*>* res = parser->parse();
}