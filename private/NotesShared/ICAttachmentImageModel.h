//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@interface ICAttachmentImageModel : ICAttachmentModel
{
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (_Bool)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (_Bool)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)addLocation;
- (void)updateFileBasedAttributes;
- (_Bool)shouldCropImage;
- (_Bool)needsFullSizePreview;
- (id)generateHardLinkURLIfNecessaryForURL:(id)arg1;
- (_Bool)canSaveURL;
- (id)saveURL;
- (_Bool)canMarkup;
- (_Bool)showThumbnailInNoteList;
- (_Bool)hasThumbnailImage;
- (_Bool)hasPreviews;
- (id)previewItemTitle;
- (id)previewImageTypeUTI;

@end

