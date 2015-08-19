//
//  Post.h
//  LeanStorageDemo
//
//  Created by lzw on 15/8/19.
//  Copyright (c) 2015年 AVOS. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Student.h"

#define kPostKeyLikes @"likes"

@interface Post : AVObject<AVSubclassing>

@property (nonatomic, copy) NSString *content;
@property (nonatomic, strong) Student *author;
@property (nonatomic, strong) NSArray *likes; //Student Array

@end
