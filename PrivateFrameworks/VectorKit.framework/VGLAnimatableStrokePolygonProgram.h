/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <VectorKit/VGLStrokePolygonProgram.h>

__attribute__((visibility("hidden")))
@interface VGLAnimatableStrokePolygonProgram : VGLStrokePolygonProgram
{
    int _uTextureVariantSampler;
    int _textureVariantSampler;
    int _uTextureVariation;
    float _textureVariation;
}

+ (id)fragName;
+ (id)vertName;
@property(nonatomic) float textureVariation;
@property(nonatomic) int textureVariantSampler;
- (void)setup;

@end
