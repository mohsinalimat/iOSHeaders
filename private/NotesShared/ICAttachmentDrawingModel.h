//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentModel.h>

@class ICDrawing, ICDrawingVersionedDocument, UIImage;

@interface ICAttachmentDrawingModel : ICAttachmentModel
{
    ICDrawingVersionedDocument *_drawingDocument;
}

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)previewItemURL;
- (id)previewItemTitle;
- (id)previewImageURL;
- (_Bool)shouldSyncPreviewImageToCloud:(id)arg1;
- (long long)previewImageOrientation;
- (struct CGAffineTransform)previewImageOrientationTransform;
- (void)saveDrawing:(id)arg1 withImage:(struct UIImage *)arg2 forImageDrawing:(id)arg3;
- (void)drawingPreviewIsUpToDate;
- (void)generatePreviewsInOperation:(id)arg1;
- (_Bool)needToGeneratePreviews;
- (_Bool)generatePreviewsDuringCloudActivity;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
- (_Bool)showThumbnailInNoteList;
- (_Bool)supportsQuickLook;
- (_Bool)hasPreviews;
- (void)writeMergeableData;
- (void)mergeWithMergeableData:(id)arg1;
- (id)sharedDrawingController;
- (id)drawingDocument;
@property(readonly, nonatomic) ICDrawing *drawing;
- (id)activityItems;
- (id)activityItem;
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)dealloc;
- (id)initWithAttachment:(id)arg1;

@end
