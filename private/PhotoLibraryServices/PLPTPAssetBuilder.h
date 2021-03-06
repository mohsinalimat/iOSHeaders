//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSString, PLMutablePTPAsset, PLPTPAsset;
@protocol PLFileManager, PLPTPConversionSupport, PLPTPTransferableAsset;

@interface PLPTPAssetBuilder : NSObject
{
    id <PLPTPConversionSupport> _conversionSupport;
    id <PLPTPTransferableAsset> _asset;
    id <PLFileManager> _fileManager;
    NSString *_filenameForPTP;
    PLMutablePTPAsset *_currentPtpAsset;
    PLPTPAsset *_commonPtpAsset;
    PLPTPAsset *_originalPtpAsset;
    NSArray *_sidecarPtpAssets;
    PLPTPAsset *_diagnosticPtpAsset;
    PLPTPAsset *_originalAdjustmentPtpAsset;
    PLPTPAsset *_fullSizeRenderImagePtpAsset;
    PLPTPAsset *_fullSizeRenderVideoPtpAsset;
    NSMutableArray *_convertedAssets;
}

+ (_Bool)_shouldIncludeDiagnosticFile;
+ (id)pictureTransferProtocolAssetsForAsset:(id)arg1 withConversionSupport:(id)arg2;
- (void).cxx_destruct;
- (void)_buildFullSizeRenderVideoAsset;
- (void)_buildFullSizeRenderImageAsset;
- (void)_buildOriginalAdjustmentAsset;
- (void)_buildDiagnosticAsset;
- (id)_assetForSidecar:(id)arg1 sidecarPath:(id)arg2 irisSidecarPath:(id)arg3;
- (void)_buildSidecarAssets;
- (void)_buildDeletedFlag;
- (void)_buildRelatedUUID;
- (void)_buildTimelapse;
- (void)_buildSlowMo;
- (void)_buildBurst;
- (_Bool)_hasIrisSidecarFile;
- (void)_buildGroupUUID;
- (void)_buildGPSInformation;
- (void)_durationOfTheAsset;
- (void)_buildModificationAndCreationDate;
- (void)_buildPhotoKey;
- (void)_buildOrientation;
- (void)_buildThumbnailDimensions;
- (void)_buildImageDimensions;
- (void)_buildThumbnailOffsetAndLength;
- (void)_buildOriginatingAssetID;
- (void)_buildFileSize;
- (void)_buildExifAvailable;
- (_Bool)_buildDirectoryPathAndFilename;
- (_Bool)_suppressPtpInfo;
- (void)_updateAsset:(id)arg1 withConversionResult:(id)arg2;
- (void)_updateAssetForTranscodeChoice:(id)arg1 withConversionResult:(id)arg2;
- (void)updateAssetForFormatConversion:(id)arg1 isVideo:(_Bool)arg2 isRender:(_Bool)arg3;
- (_Bool)_buildOriginalAsset;
- (void)_buildCommonAsset;
- (id)pictureTransferProtocolAssets;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2 fileManager:(id)arg3;
- (id)initWithAsset:(id)arg1 conversionSupport:(id)arg2;

@end

