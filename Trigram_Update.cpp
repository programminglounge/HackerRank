#include <bits/stdc++.h>
#include <vector>

int find_dot(std::string s)
{
  int first = s.find('.');
  if (first == std::string::npos)
  {
    return -1;
  }
  else
  {
    return first;
  }
}

int find_first_space(std::string s)
{
  int first = s.find(' ');
  if (first == std::string::npos)
  {
    return -1;
  }
  else
  {
    return first;
  }
}

int find_third_space(std::string s)
{
  int first = s.find(' ');
  if (first == std::string::npos)
  {
    return -1;
  }
  else
  {
    s = s.substr(first+1);
    int second = s.find(' ');
    if (second == std::string::npos)
    {
      return -1;
    }
    else
    {
      s = s.substr(second+1);
      int third = s.find(' ');
      if (third == std::string::npos)
      {
        return first+second+s.length()+2;
      }
      else
      {
        return first+second+third+2;
      }
    }
  }
}

int main()
{
  std::string s;
  std::map<std::string, std::pair<int, int>> my_map2;
  getline(std::cin, s);
  int pos_dot = find_dot(s);
  std::string sub2 = "";
  std::string sub = "";
  int elementcount = 1;
  while (pos_dot != -1)
  {
    sub = s.substr(0, pos_dot);
    int pos_third_space = find_third_space(sub);
    int newstart = 0;
    if (pos_third_space == -1)
    {
      pos_dot = find_dot(s);
      sub = s.substr(0, pos_dot);
    }
    else
    {
      while(pos_third_space != -1)
      {
        sub2 = sub.substr(0, pos_third_space);
        if (my_map2.size() == 0)
        {
          my_map2[sub2] = std::make_pair(1, elementcount);
          elementcount++;
          newstart = find_first_space(sub);
          sub = sub.substr(newstart+1);
          pos_third_space = find_third_space(sub);
        }
        else
        {
          std::map<std::string, std::pair<int, int>>::iterator it;
          for (it = my_map2.begin(); it != my_map2.end(); ++it)
          {
            if (it->first == sub2)
            {
              it->second.first++;
              newstart = find_first_space(sub);
              sub = sub.substr(newstart+1);
              pos_third_space = find_third_space(sub);
              break;
            }
          }
          if (it == my_map2.end())
          {
            my_map2[sub2] = std::make_pair(1, elementcount);
            elementcount++;
            newstart = find_first_space(sub);
            sub = sub.substr(newstart+1);
            pos_third_space = find_third_space(sub);
          }
        }
      }
      
      pos_dot = find_dot(s);
      if(pos_dot != s.length()-1)
      {
        s = s.substr(pos_dot+2);
        pos_dot = find_dot(s);
      }
      else
      {
        s = "";
        pos_dot = -1;
      }
    }
  }
  int max = 0;
  std::map<std::string, std::pair<int, int>>::iterator it2;
  for (std::map<std::string, std::pair<int, int>>::iterator it = my_map2.begin(); it!=my_map2.end(); ++it)
  {
    if (it->second.first>max)
    {
      max = it->second.first;
      it2 = it;
    }
  }
  std::cout << it2->first << std::endl;
  return 0;
}
