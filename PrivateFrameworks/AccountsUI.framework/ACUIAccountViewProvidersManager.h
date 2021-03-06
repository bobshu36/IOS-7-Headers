/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class ACUIPluginLoader;

@interface ACUIAccountViewProvidersManager : NSObject
{
    ACUIPluginLoader *_pluginLoader;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_pluginForAccountType:(id)arg1;
- (id)configurationInfoForViewingAccount:(id)arg1;
- (id)configurationInfoForCreatingAccountWithType:(id)arg1;
- (Class)viewControllerClassForViewingAccount:(id)arg1;
- (Class)viewControllerClassForCreatingAccountWithType:(id)arg1;
- (id)_pluginLoader;

@end

