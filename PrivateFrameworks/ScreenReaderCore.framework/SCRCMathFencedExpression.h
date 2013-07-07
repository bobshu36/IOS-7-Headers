/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SCRCMathFencedExpression : SCRCMathRowExpression
{
    NSString *_openString;
    NSString *_closeString;
}

@property(copy, nonatomic) NSString *closeString; // @synthesize closeString=_closeString;
@property(copy, nonatomic) NSString *openString; // @synthesize openString=_openString;
- (id)latexDescriptionInMathMode:(BOOL)arg1;
- (id)mathMLAttributes;
- (id)mathMLTag;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg1 treePosition:(id)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(int)arg1 upToDepth:(unsigned int)arg2 treePosition:(id)arg3;
- (id)speakableDescriptionWithSpeakingStyle:(int)arg1 arePausesAllowed:(BOOL)arg2;
- (unsigned int)fractionLevel;
- (id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1;
- (id)_binomialCoefficientContent;
- (BOOL)_isBinomialCoefficient;
- (id)description;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
