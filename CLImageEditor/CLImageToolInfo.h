//
//  CLImageToolInfo.h
//
//  Created by sho yakushiji on 2013/11/26.
//  Copyright (c) 2013年 CALACULU. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol CLImageToolProtocol;

@interface CLImageToolInfo : NSObject

@property (nonatomic, readonly) NSString *toolName;
@property (nonatomic, strong)   NSString *title;
@property (nonatomic, assign)   BOOL      available;
@property (nonatomic, assign)   CGFloat   dockedNumber;
@property (nonatomic, strong)   NSString *iconImagePath;
@property (nonatomic, readonly) UIImage  *iconImage;
@property (nonatomic, readonly) NSArray  *subtools;


+ (CLImageToolInfo*)toolInfoForToolClass:(Class<CLImageToolProtocol>)toolClass;

- (NSString*)toolTreeDescription;
- (NSArray*)sortedSubtools;

- (CLImageToolInfo*)subToolInfoWithToolName:(NSString*)toolName recursive:(BOOL)recursive;
- (CLImageToolInfo*)subToolInfoWithTitle:(NSString*)title recursive:(BOOL)recursive;

@end
