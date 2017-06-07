//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSDMediaInfo.h>

#import <iWorkImport/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <iWorkImport/TSDContainerInfo-Protocol.h>
#import <iWorkImport/TSDMixing-Protocol.h>
#import <iWorkImport/TSDReducibleImageContainer-Protocol.h>
#import <iWorkImport/TSKTransformableObject-Protocol.h>
#import <iWorkImport/TSSPresetSource-Protocol.h>

@class NSObject, NSString, TSDImageAdjustments, TSDInfoGeometry, TSDMaskInfo, TSDMediaStyle, TSPData, TSPObject, TSUBezierPath;
@protocol TSDContainerInfo, TSDOwningAttachment;

__attribute__((visibility("hidden")))
@interface TSDImageInfo : TSDMediaInfo <TSDReducibleImageContainer, TSDContainerInfo, TSDMixing, TSSPresetSource, TSKTransformableObject, TSDCompatibilityAwareMediaContainer>
{
    TSPData *mImageData;
    TSPData *mThumbnailImageData;
    TSPData *mOriginalImageData;
    TSDImageAdjustments *mImageAdjustments;
    TSPData *mAdjustedImageData;
    TSPData *mThumbnailAdjustedImageData;
    TSPData *mEnhancedImageData;
    TSDMediaStyle *mStyle;
    TSDMaskInfo *mMaskInfo;
    TSUBezierPath *mInstantAlphaPath;
    TSUBezierPath *mTracedPath;
    struct CGSize mNaturalSize;
    _Bool mCurrentlyInDocument;
}

+ (id)presetKinds;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3 reservedCount:(unsigned long long)arg4;
+ (void)bootstrapPresetsOfKind:(id)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (id)bootstrapPropertyMapForPresetIndex:(unsigned long long)arg1 inTheme:(id)arg2 alternate:(int)arg3;
+ (void)adjustIncomingImageGeometry:(id)arg1 maskGeometry:(id)arg2 forImageData:(id)arg3 maskedWithInstantAlphaPath:(id)arg4 withNaturalSize:(struct CGSize)arg5 forTargetImageGeometry:(id)arg6 withTargetMaskGeometry:(id)arg7;
+ (id)i_thumbnailForImageData:(id)arg1;
@property(retain, nonatomic) TSPData *adjustedImageData; // @synthesize adjustedImageData=mAdjustedImageData;
@property(copy, nonatomic) TSDImageAdjustments *imageAdjustments; // @synthesize imageAdjustments=mImageAdjustments;
@property(retain, nonatomic) TSDMaskInfo *maskInfo; // @synthesize maskInfo=mMaskInfo;
- (id)style;
@property(retain, nonatomic) TSPData *originalImageData; // @synthesize originalImageData=mOriginalImageData;
@property(retain, nonatomic) TSPData *thumbnailImageData; // @synthesize thumbnailImageData=mThumbnailImageData;
@property(retain, nonatomic) TSPData *imageData; // @synthesize imageData=mImageData;
- (id)mediaDataForDragging;
- (void)acceptVisitor:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (id)propertyNameForOriginalSizeCommand;
- (id)propertyNameForFlagsCommand;
@property(nonatomic) struct CGSize naturalSize;
@property(readonly, nonatomic) TSUBezierPath *tracedPath;
- (id)localizedChunkNameForTextureDeliveryStyle:(unsigned long long)arg1 animationFilter:(id)arg2 chunkIndex:(unsigned long long)arg3;
- (void)updateGeometryToReplaceMediaInfo:(id)arg1;
- (struct CGPoint)centerForReplacingWithNewMedia;
@property(readonly, nonatomic) _Bool canPasteAsPDF;
- (_Bool)isPDF;
- (id)updatedMaskInfoGeometryForImageDraggedBy:(struct CGPoint)arg1;
- (id)defaultMaskInfo;
- (id)defaultMaskInfoWithContext:(id)arg1;
- (_Bool)maskCanBeReset;
- (_Bool)isMasked;
- (id)objectForProperty:(int)arg1;
- (void)setAdjustedImageData:(id)arg1 thumbnailData:(id)arg2;
@property(retain, nonatomic) TSUBezierPath *instantAlphaPath;
- (id)i_instantAlphaPathIgnoringNaturalSize;
- (_Bool)canResetMediaSize;
- (struct CGSize)rawDataSize;
- (struct CGSize)defaultOriginalSize;
- (struct CGSize)originalSize;
- (void)setStyle:(id)arg1;
- (void)setImageData:(id)arg1 thumbnailData:(id)arg2;
- (id)mediaFileType;
- (id)mediaDisplayName;
- (_Bool)needsDownload;
- (long long)mediaCompatibilityTypeForData:(id)arg1 associatedHint:(id)arg2;
- (struct CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2;
- (id)datasForReplacingMediaContentsWithAssociatedHints;
- (struct CGAffineTransform)computeFullTransform;
- (id)geometryWithMask;
- (id)infoForSelectionPath:(id)arg1;
- (id)childInfos;
- (id)styleIdentifierTemplateForNewPreset;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
@property(nonatomic) NSObject<TSDContainerInfo> *parentInfo;
@property(copy, nonatomic) TSDInfoGeometry *geometry;
@property(readonly, nonatomic) TSDMediaStyle *imageStyle;
- (id)presetKind;
- (Class)repClass;
- (Class)layoutClass;
- (Class)styleClass;
- (void)setExteriorTextWrap:(id)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 style:(id)arg2;
- (void)dealloc;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 thumbnailImageData:(id)arg5 originalImageData:(id)arg6 imageAdjustments:(id)arg7 adjustedImageData:(id)arg8 thumbnailAdjustedImageData:(id)arg9;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 imageData:(id)arg4 originalImageData:(id)arg5;
@property(retain, nonatomic) TSPData *enhancedImageData;
@property(retain, nonatomic) TSPData *thumbnailAdjustedImageData;
- (void)saveToArchiver:(id)arg1;
- (void)saveToArchive:(struct ImageArchive *)arg1 archiver:(id)arg2;
- (id)subclassInitFromUnarchiver:(id)arg1;
- (void)p_upgradeImageThumbnail;
- (void)p_upgradeImageGeometry;
- (id)initFromUnarchiver:(id)arg1;
- (void)loadFromArchive:(const struct ImageArchive *)arg1 unarchiver:(id)arg2;
- (_Bool)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg1;

// Remaining properties
@property(readonly, nonatomic, getter=isAnchoredToText) _Bool anchoredToText; // @dynamic anchoredToText;
@property(readonly, nonatomic, getter=isAttachedToBodyText) _Bool attachedToBodyText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic, getter=isFloatingAboveText) _Bool floatingAboveText; // @dynamic floatingAboveText;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic, getter=isInlineWithText) _Bool inlineWithText; // @dynamic inlineWithText;
@property(nonatomic) _Bool matchesObjectPlaceholderGeometry;
@property(nonatomic) TSPObject<TSDOwningAttachment> *owningAttachment; // @dynamic owningAttachment;
@property(readonly, nonatomic) TSPObject<TSDOwningAttachment> *owningAttachmentNoRecurse; // @dynamic owningAttachmentNoRecurse;
@property(readonly) Class superclass;

@end

