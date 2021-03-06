//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/ICAttachmentDrawingModel.h>

@class UIImage;

@interface ICAttachmentDrawingModel (UI)
- (_Bool)canConvertToHTMLForSharing;
- (id)attributesForSharingHTMLWithTagName:(id *)arg1 textContent:(id *)arg2;
- (id)dataForTypeIdentifier:(id)arg1;
- (id)fileURLForTypeIdentifier:(id)arg1;
- (id)providerFileTypes;
- (id)providerDataTypes;
- (id)activityItems;
- (id)activityItem;
@property(readonly, nonatomic) UIImage *imageForActivityItem;
- (void)saveDrawing:(id)arg1 withImage:(struct UIImage *)arg2 forImageDrawing:(id)arg3;
- (CDUnknownBlockType)genericBrickThumbnailCreator;
- (CDUnknownBlockType)genericListThumbnailCreator;
@end

