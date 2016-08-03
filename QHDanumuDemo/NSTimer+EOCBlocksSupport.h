//
//  NSTimer+EOCBlocksSupport.h
//  QHDanumuDemo
//
//  Created by Qsyx on 15/7/10.
//  Copyright (c) 2015年 Qsyx. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSTimer (EOCBlocksSupport)

+ (NSTimer *)eoc_scheduledTimerWithTimeInterval:(NSTimeInterval)interval block:(void (^)())block repeats:(BOOL)repeats;

@end
