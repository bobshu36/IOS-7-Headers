/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOProxyClient, NSLock, NSMutableSet;

@interface GEOProxyClientRegistry : NSObject
{
    NSLock *_lock;
    GEOProxyClient *_currentComposite;
    NSMutableSet *_currentSet;
}

+ (id)sharedRegistry;
- (id)compositeClient;
- (void)removeClient:(id)arg1;
- (void)addClient:(id)arg1;
- (void)_updateComposite;
- (void)dealloc;
- (void)enableRegistry;

@end

