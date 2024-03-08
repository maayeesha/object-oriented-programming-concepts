#include <bits/stdc++.h>
using namespace std;

class XMLData {
  string xmlData;

public:
  XMLData(string pXmlData) { xmlData = pXmlData; }
  string getXmlData() { return xmlData; }
};

class dataAnalyticsTool {
  string jsonData;

public:
  dataAnalyticsTool(){};
  dataAnalyticsTool(string pjsonData) { jsonData = pjsonData; }
  virtual void AnalyzeData() { cout << "Analyzing Data" << jsonData << endl; }
};

class Adapter : public dataAnalyticsTool {
  XMLData *xmlData;

public:
  Adapter(XMLData *pxmlData) { xmlData = pxmlData; }
  void AnalyzeData() override {
    cout << "Converting XML data" << xmlData->getXmlData() << " to JSON Data"
         << endl;
    cout << "Analyzing converted JSON data" << endl;
  }
};
class Client {
public:
  void processData(dataAnalyticsTool *tool) { tool->AnalyzeData(); }
};

int main() {

  XMLData *xmlData = new XMLData("Sample XML");
  dataAnalyticsTool *tool = new Adapter(xmlData);
  Client *client = new Client;
  client->processData(tool);
  return 0;
}