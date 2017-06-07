//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreThemeDefinition/TDRenditionSpec.h>

@class NSOrderedSet, NSString, TDPNGAsset, TDThemeCompressionType;

@interface TDSimpleArtworkRenditionSpec : TDRenditionSpec
{
    struct CGRect _alignmentRect;
    _Bool _allowsMultiPassEncoding;
    _Bool _allowsOptimalPacking;
}

+ (void)initialize;
@property(nonatomic) _Bool allowsOptimalPacking; // @synthesize allowsOptimalPacking=_allowsOptimalPacking;
@property(nonatomic) _Bool allowsMultiPassEncoding; // @synthesize allowsMultiPassEncoding=_allowsMultiPassEncoding;
- (void)drawPackableRenditionInContext:(struct CGContext *)arg1 withDocument:(id)arg2;
- (void)updatePackingPropertiesWithDocument:(id)arg1;
- (id)createCSIRepresentationWithCompression:(_Bool)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (struct CGImage *)_createImageRefWithURL:(id)arg1 andDocument:(id)arg2 format:(unsigned int *)arg3 vectorBased:(_Bool *)arg4;
- (int)_rawPixelFormatOfCGImage:(struct CGImage *)arg1;
- (_Bool)canBePackedWithDocument:(id)arg1;
- (CDStruct_1ba92a5e)_edgeMetricsForAlignmentRect:(struct CGRect)arg1 originalRenditionSize:(CDStruct_1ef3fb1f)arg2 newRenditionSize:(CDStruct_1ef3fb1f)arg3;
- (id)_sliceRectanglesForRenditionSize:(CDStruct_1ef3fb1f)arg1 unadjustedSliceRectangles:(id *)arg2 imageSlicesNeedAdjustment:(_Bool *)arg3 newRenditionSize:(CDStruct_1ef3fb1f *)arg4;
- (id)_slicesToUseForCSI;
- (void)_logExtra:(id)arg1;
- (void)_logWarning:(id)arg1;
- (void)_logError:(id)arg1;
- (id)associatedFileModificationDateWithDocument:(id)arg1;
- (void)copyAttributesInto:(id)arg1;
- (void)awakeFromFetch;
@property(nonatomic) struct CGRect alignmentRect; // @dynamic alignmentRect;
@property(nonatomic) struct CGRect primitiveAlignmentRect;
- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

// Remaining properties
@property(retain, nonatomic) NSString *alignmentRectString; // @dynamic alignmentRectString;
@property(retain, nonatomic) TDPNGAsset *asset; // @dynamic asset;
@property(retain, nonatomic) TDThemeCompressionType *compressionType; // @dynamic compressionType;
@property(nonatomic) _Bool isTintable; // @dynamic isTintable;
@property(retain, nonatomic) NSString *nonAlphaImageAreaString; // @dynamic nonAlphaImageAreaString;
@property(retain, nonatomic) NSString *originalImageSizeString; // @dynamic originalImageSizeString;
@property(retain, nonatomic) NSOrderedSet *slices; // @dynamic slices;

@end

