/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface MPUDataSource : NSObject <NSCoding>
{
    int _entityType;
}

@property(readonly, nonatomic) int entityType; // @synthesize entityType=_entityType;
@property(readonly, nonatomic) BOOL usesSections;
@property(readonly, nonatomic) NSString *titleForGlobalHeader;
@property(readonly, nonatomic) BOOL showsIndexBar;
@property(readonly, nonatomic) BOOL showsEntityCountFooter;
- (struct _NSRange)rangeOfSectionAtIndex:(unsigned int)arg1;
- (id)playbackContextForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int numberOfSections;
- (id)localizedSectionTitleAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSArray *localizedSectionIndexTitles;
- (void)invalidateWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3;
- (void)invalidate;
@property(readonly, nonatomic) BOOL isEmpty;
- (unsigned int)indexOfSectionForSectionTitleAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfEntity:(id)arg1;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) NSString *entityCountFormat;
- (id)entityAtIndex:(unsigned int)arg1;
- (id)entities;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (BOOL)canEditEntityAtIndex:(unsigned int)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (id)dataSourceFromEntityAtIndex:(unsigned int)arg1 entityType:(int)arg2;
- (id)dataSourceFromEntityAtIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int count;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (id)anyEntity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityType:(int)arg1;

@end

