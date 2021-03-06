/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class EDCollection, EDReference, EDRowBlock, EDRowBlocks, EDWorkbook, EDWorksheet;

__attribute__((visibility("hidden")))
@interface EDReferenceIterator : NSObject
{
    EDWorkbook *mWorkbook;
    EDWorksheet *mCurrentSheet;
    EDCollection *mReferences;
    EDReference *mReference;
    EDRowBlocks *mRowBlocks;
    EDRowBlock *mRowBlock;
    unsigned int mRowBlockIndex;
    struct EDRowInfo *mRowInfo;
    unsigned int mRowInfoIndex;
    unsigned int mCellIndex;
    unsigned int mNextArrayIndex;
    int mCurrentCellIndex;
    unsigned int mPreviousColumnNumber;
}

+ (id)referenceIteratorWithReferenceArray:(id)arg1 workbook:(id)arg2;
+ (id)referenceIteratorWithReference:(id)arg1 workbook:(id)arg2;
- (unsigned int)currentCellIndex;
- (struct EDCellHeader *)nextCell;
- (void)setCurrentSheet:(id)arg1;
- (void)dealloc;
- (id)initWithReferenceArray:(id)arg1 workbook:(id)arg2;
- (id)initWithReference:(id)arg1 workbook:(id)arg2;
- (id)initWithReferenceArray:(id)arg1 reference:(id)arg2 workbook:(id)arg3;
- (_Bool)nextRow;
- (_Bool)nextReference;
- (void)setReference:(id)arg1;

@end

