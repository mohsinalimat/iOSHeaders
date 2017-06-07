//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ChatKit/CKMediaObject.h>

@class CKImageData, NSString, NSURL, UIImage;

@interface CKImageMediaObject : CKMediaObject
{
    CKImageData *_imageData;
    CKImageData *_backgroundImageData;
    NSURL *_appendedBundleURL;
    struct CGSize _originalSize;
    NSString *_irisVideoPath;
    _Bool _isSticker;
    UIImage *_thumbnail;
}

+ (Class)imageDataClass;
+ (_Bool)isPreviewable;
+ (id)attachmentSummary:(unsigned long long)arg1;
+ (id)fallbackFilenamePrefix;
+ (id)UTITypes;
+ (Class)__ck_attachmentItemClass;
@property(readonly, nonatomic) _Bool isSticker; // @synthesize isSticker=_isSticker;
@property(retain, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;
- (void).cxx_destruct;
- (struct CGSize)originalSize;
@property(readonly, nonatomic) CKImageData *imageData;
- (id)previewItemTitle;
- (id)previewItemURL;
- (_Bool)canShareItem;
- (id)pasteboardItem;
- (id)_getIrisBundleURL;
- (id)_getTempIrisBundleLocation;
- (id)_getTempIrisFolder;
- (id)calculateIrisVideoPath;
- (id)getIrisVideoPath;
- (void)export:(id)arg1;
@property(readonly, nonatomic) _Bool isIrisAsset;
- (_Bool)canExport;
- (id)generateThumbnailFillToSize:(struct CGSize)arg1 contentAlignmentInsets:(struct UIEdgeInsets)arg2;
- (id)generateThumbnailForWidth:(double)arg1 orientation:(BOOL)arg2;
- (struct CGSize)bbSize;
- (id)location;
- (int)mediaType;
- (id)initWithTransfer:(id)arg1;
- (void)dealloc;
- (void)_removeAppendedBundle;

@end

