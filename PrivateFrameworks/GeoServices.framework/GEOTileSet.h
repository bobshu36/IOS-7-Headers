/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "PBCodable.h"

@class NSMutableArray, NSString;

@interface GEOTileSet : PBCodable
{
    NSString *_baseURL;
    NSString *_localizationURL;
    NSString *_multiTileURL;
    int _scale;
    int _size;
    int _style;
    NSMutableArray *_supportedLanguages;
    NSMutableArray *_validVersions;
    BOOL _multiTileURLUsesStatusCodes;
    struct {
        unsigned int multiTileURLUsesStatusCodes:1;
    } _has;
}

@property(nonatomic) BOOL multiTileURLUsesStatusCodes; // @synthesize multiTileURLUsesStatusCodes=_multiTileURLUsesStatusCodes;
@property(retain, nonatomic) NSMutableArray *supportedLanguages; // @synthesize supportedLanguages=_supportedLanguages;
@property(retain, nonatomic) NSString *localizationURL; // @synthesize localizationURL=_localizationURL;
@property(nonatomic) int size; // @synthesize size=_size;
@property(nonatomic) int scale; // @synthesize scale=_scale;
@property(retain, nonatomic) NSMutableArray *validVersions; // @synthesize validVersions=_validVersions;
@property(nonatomic) int style; // @synthesize style=_style;
@property(retain, nonatomic) NSString *multiTileURL; // @synthesize multiTileURL=_multiTileURL;
@property(retain, nonatomic) NSString *baseURL; // @synthesize baseURL=_baseURL;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) BOOL hasMultiTileURLUsesStatusCodes;
- (id)supportedLanguageAtIndex:(unsigned int)arg1;
- (unsigned int)supportedLanguagesCount;
- (void)addSupportedLanguage:(id)arg1;
- (void)clearSupportedLanguages;
@property(readonly, nonatomic) BOOL hasLocalizationURL;
- (id)validVersionAtIndex:(unsigned int)arg1;
- (unsigned int)validVersionsCount;
- (void)addValidVersion:(id)arg1;
- (void)clearValidVersions;
@property(readonly, nonatomic) BOOL hasMultiTileURL;
@property(readonly, nonatomic) BOOL hasBaseURL;
- (void)dealloc;

@end
