#include <iostream>
#include <vector>

std::vector<std::pair<int, int> > *findPairs(const std::vector<int>& numbers) {

    size_t vecSize = numbers.size() / 2;

    std::vector<std::pair<int, int> > *pairs = new std::vector<std::pair<int, int> >;


    size_t i = 0;
    size_t j = 0;
    while (i < vecSize * 2)
    {
        if (numbers[i] > numbers[i + 1])
            pairs->push_back(std::make_pair(numbers[i + 1], numbers[i]));
        else
            pairs->push_back(std::make_pair(numbers[i], numbers[i + 1]));
        j++;
        i += 2;
    }
    // std::cout<<it->first<<"  "<< it->second<<std::endl;
    // exit (0);

    return pairs;
}

std::vector<int> *mainChaineConstructor(std::vector<std::pair<int, int> > *pairs, size_t pairSize )
{
    std::vector<int> *mainChaine = new std::vector<int>;

    std::vector<std::pair<int, int> >::iterator it;

    // for (size_t i = 0; i < pairSize; i++)
    // {
        for (it = pairs->begin(); it != pairs->end(); ++it)
        {
            mainChaine->push_back(it->second);
        }
    
    std::sort(mainChaine->begin(), mainChaine->end());
    for (it = pairs->begin(); it != pairs->end(); ++it)
    {
        if (it->second == *(mainChaine->begin()))
            break;
    }
    // mainChaine->insert(mainChaine->begin(), 0);
    // pairs->erase(pairs->begin());
    return mainChaine;
}

std::vector<int> * pendingList(std::vector<std::pair<int, int> > *pairs)
{
    std::vector<int> *pending = new std::vector<int>;
    std::vector<std::pair<int, int> >::iterator it;
    for(it = pairs->begin(); it != pairs->end(); ++it)
    {
        // std::cout<<it->first<<"  "<<it->second<<std::endl;
        pending->push_back(it->first);
        // pairs->erase(it);
    }
    return (pending);
}
int main() {
    std::vector<int> numbers ;
    numbers.push_back(0);
    numbers.push_back(1);
    numbers.push_back(21);
    numbers.push_back(41);
    numbers.push_back(91);
    numbers.push_back(55);
    numbers.push_back(77);
    numbers.push_back(2);
    numbers.push_back(20);
    numbers.push_back(27);
    // numbers.i

    std::vector<std::pair<int, int> > *pairs = findPairs(numbers);
    size_t vec = numbers.size() / 2;
    std::vector<int> *mainChaine = mainChaineConstructor(pairs, vec);
    std::vector<int> *pending = pendingList(pairs);

    size_t j = 0;
    // while (j < vec)
    // {
        for (std::vector<std::pair<int, int> >::iterator it = pairs->begin(); it != pairs->end(); it++)
            std::cout<<it->first<<", "<<it->second<<std::endl;
    //     j++;
    // }

    for(std::vector<int>::iterator it = mainChaine->begin(); it != mainChaine->end(); it++)
    {
        std::cout<<*it<<"  ";
    }
    std::cout<<std::endl<<"--------------------------------"<<std::endl;
    for(std::vector<int>::iterator it = pending->begin(); it != pending->end(); it++)
    {
        std::cout<<*it<<"  ";
    }

    return 0;
}
