/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UIView.h"

@interface SUSnapshotView : UIView
{
    UIView *_imageView;
}

- (void)_takeIOSurfaceSnapshotOfView:(id)arg1;
- (void)_takeCGSnapshotOfView:(id)arg1;
- (void)layoutSubviews;
- (void)snapshotView:(id)arg1 usingIOSurface:(BOOL)arg2;
- (void)dealloc;

@end

