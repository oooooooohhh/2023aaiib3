class Solution {
public:
    vector<string> findOcurrences(string text, string first, string second) {
        vector<string> ans; //�񵪮�(���Y�ۦp���}�C)

        stringstream ss(text); // ��string�ন��cin cout ��stream


    string word1, word2,word3; //��1,��2,��3�Ӧr
    ss >> word1; // ��cin >> word1 ����k, Ū����
    ss >> word2;
    while(ss >> word3){
        if(word1==first && word2==second) ans.push_back(word3); // �񵪮�
        word1 = word2;
        word2 = word3;

    }
    return ans;


    }
};
