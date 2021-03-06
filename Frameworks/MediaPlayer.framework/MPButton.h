/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIButton.h"

@interface MPButton : UIButton
{
    struct UIEdgeInsets _hitRectInsets;
    double _holdDelayInterval;
    unsigned int _holding:1;
}

+ (id)easyTouchButtonWithType:(int)arg1;
+ (float)easyTouchDefaultCharge;
+ (struct UIEdgeInsets)easyTouchDefaultHitRectInsets;
@property(nonatomic) double holdDelayInterval; // @synthesize holdDelayInterval=_holdDelayInterval;
@property(nonatomic) struct UIEdgeInsets hitRectInsets; // @synthesize hitRectInsets=_hitRectInsets;
- (void)_handleTouchUp;
- (void)_handleTouchDown;
- (void)_handleTouchCancel;
- (void)_delayedTriggerHold;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGRect)hitRect;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

