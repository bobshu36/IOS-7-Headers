/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSURL;

@interface PKPassImages : NSObject <NSSecureCoding>
{
    unsigned int _version;
    NSURL *_originCacheURL;
}

+ (id)_archivedImages:(id)arg1;
+ (id)_archiveURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (int)imageSet;
+ (int)currentVersion;
+ (id)archiveName;
+ (id)imageSet:(int)arg1 withCacheURL:(id)arg2 cardURL:(id)arg3 displayProfile:(id)arg4;
+ (Class)classForImageSet:(int)arg1;
@property(copy, nonatomic) NSURL *originCacheURL; // @synthesize originCacheURL=_originCacheURL;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (int)version;
- (void)preheatImages;
- (void)saveCache:(id)arg1;
- (void)dealloc;
- (id)initWithCardURL:(id)arg1 displayProfile:(id)arg2;

@end

