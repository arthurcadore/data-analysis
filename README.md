# data-analysis
Codes to analise huge datasets in python


código utilizado na coleta das cidades: 

´´´ 
 while (getline(archiveCSV, line)) {

    // Verifica se a linha não está vazia.
    if (!line.empty()) {

      // Cria um stringstream para ler a linha.
      stringstream ss(line);

      while (ss.good()) {
        string substr;
        getline(ss, substr, ',');
        atualLine.push_back(substr);
      }

      // pega a primeira posição da lista atualine e imprime no terminal, verifica se a string é vazia.
      if (!atualLine.front().empty()) {
        // cout << atualLine.front() << endl;
      string city = atualLine.front();
      cities.push_back(city);
      }
      atualLine.clear();
    }
  }

  cout << cities.size() << endl;
  // Remove duplicatas na lista de cidades.
    cities.sort();
    cities.unique();
  cout << cities.size() << endl;

  ´´´