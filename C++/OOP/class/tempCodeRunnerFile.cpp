void setVoc(string v){
        char strs[][10] = {"Knight", "Paladin", "Sorcerer", "Druid"};
        for(auto c: v )
            tolower(c);
        v[0]= toupper(v[0]);
        for(auto substr: strs) { 
                if(v == substr){
                    voc = v;
                    return;
                }
            
        }
        voc = "No-Voc";
    }