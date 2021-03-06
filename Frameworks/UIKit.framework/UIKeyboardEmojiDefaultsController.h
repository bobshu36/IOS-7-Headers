/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiDefaultsController : NSObject
{
    NSMutableDictionary *_defaults;
}

+ (id)sharedController;
- (id)defaultsValueForKey:(id)arg1;
- (void)setDefaultsValue:(id)arg1 forKey:(id)arg2;
- (int)currentSequenceKey;
- (void)setCurrentSequenceKey:(int)arg1;
- (id)usageHistoryKey;
- (void)setUsageHistoryKey:(id)arg1;
- (id)recentsKey;
- (void)setRecentsKey:(id)arg1;
- (int)emojiCategoryDefaultsIndex:(id)arg1;
- (void)setEmojiCategoryDefaultsIndex:(int)arg1 forCategory:(id)arg2;
- (void)handleRead:(id)arg1;
- (void)handleWrite:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)writeEmojiDefaults;
- (void)readEmojiDefaults;
- (id)emptyDefaultsDictionary;

@end

