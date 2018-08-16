//
//  UIDevice+FCUUID.h
//
//  Created by Fabio Caccamo on 19/11/15.
//  Copyright © 2015 Fabio Caccamo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "FCUUID.h"

@interface UIDevice (FCUUID)

-(NSString *)uuid;
// 获取idfa，获取不到返回uuid
-(NSString *)idfa;

@end
