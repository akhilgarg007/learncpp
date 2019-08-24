#include <iostream>

int main()
{
    constexpr unsigned char option_viewed { 0x01 };
    constexpr unsigned char option_edited { 0x02 };
    constexpr unsigned char option_favorited { 0x04 };
    constexpr unsigned char option_shared { 0x08 };
    constexpr unsigned char option_deleted { 0x80 };
 
    unsigned char myArticleFlags {};
 
    //set article as viewed
    myArticleFlags |= option_viewed;

    //check if the article was deleted
    if (myArticleFlags & option_deleted)
        std::cout << "The article was deleted" << std::endl;

    //clear the article as fovourite
    myArticleFlags &= ~option_favorited;
    return 0;
}