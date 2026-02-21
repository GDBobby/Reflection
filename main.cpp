#include "Reflect.h"

#include <meta>

#include <cstdio>

#include <ranges>

//https://www.open-std.org/jtc1/sc22/wg21/docs/papers/2025/p2996r13.html
//^best resource i found

int main(){
  using GlobalNamespaceReflectInfo = Reflection::ReflectedInfo<^^::>;

    template for (std::size_t i : std::views::iota(0u, GlobalNamespaceReflectInfo::member_count)) {
      try{
        printf("%d:%s\n", Reflection::GetName<GlobalNamespaceReflectInfo::members[i]>().data());    
      }
      catch(...){
        printf("invalid name : %zu\n", i);
      }
    }

    //template for(constexpr auto g_mem : GlobalNamespaceReflectInfo::members){
    //  static constexpr auto consteval_to_constexpr_temp_variable = Reflection::GetName<g_mem>();
    //  printf("%s\n", consteval_to_constexpr_temp_variable.data());    
    //}

  return 0;
}