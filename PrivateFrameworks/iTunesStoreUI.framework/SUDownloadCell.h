/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <iTunesStoreUI/SUGridTableViewCell.h>

@class UIButton, UISlider;

@interface SUDownloadCell : SUGridTableViewCell
{
    UIButton *_accessoryButton;
    UISlider *_progressBar;
}

- (void)_reloadProgressBar;
- (void)_reloadAccessoryButton;
- (BOOL)_isDownloadResumable:(id)arg1;
- (BOOL)handleTap;
- (void)_accessoryButtonAction:(id)arg1;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setConfiguration:(id)arg1;
- (void)layoutSubviews;
- (void)reloadForStatusChange;
- (void)dealloc;

@end

