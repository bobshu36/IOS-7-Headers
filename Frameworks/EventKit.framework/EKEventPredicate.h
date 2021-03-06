/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <EventKit/EKPredicate.h>

@class NSDate, NSString, NSTimeZone;

@interface EKEventPredicate : EKPredicate
{
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_uuid;
    NSTimeZone *_timeZone;
    BOOL _shouldLoadDefaultProperties;
}

+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
+ (id)predicateWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (id)predicateFormat;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)evaluateWithObject:(id)arg1;
@property(readonly, nonatomic) BOOL shouldLoadDefaultProperties;
@property(readonly, nonatomic) NSTimeZone *timeZone;
@property(readonly, nonatomic) NSString *eventUUID;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) NSDate *startDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4 loadDefaultProperties:(BOOL)arg5;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 calendars:(id)arg4;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 timeZone:(id)arg3 eventUUID:(id)arg4 calendars:(id)arg5;

@end

