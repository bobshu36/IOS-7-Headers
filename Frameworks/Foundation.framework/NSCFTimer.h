/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSTimer.h"

__attribute__((visibility("hidden")))
@interface NSCFTimer : NSTimer
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (id)init;
- (id)initWithFireDate:(id)arg1 interval:(double)arg2 target:(id)arg3 selector:(SEL)arg4 userInfo:(id)arg5 repeats:(BOOL)arg6;
- (unsigned long)_cfTypeID;
- (void)fire;
- (id)userInfo;
- (void)setFireDate:(id)arg1;
- (id)fireDate;
- (void)invalidate;
- (void)setTolerance:(double)arg1;
- (double)tolerance;
- (double)timeInterval;
- (BOOL)isValid;
- (void)finalize;
- (unsigned int)retainCount;
- (BOOL)retainWeakReference;
- (BOOL)allowsWeakReference;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

