//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAttachment, MFFuture, NSArray, NSData, NSDictionary, NSString, NSURL;
@protocol MFMailComposeViewDelegate;

@protocol MFComposeBodyField <NSObject>
@property(nonatomic, getter=isDirty) _Bool dirty;
@property(nonatomic) id <MFMailComposeViewDelegate> mailComposeViewDelegate;
- (NSString *)nextAttachmentName;
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentData:(NSData *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentAtURL:(NSURL *)arg2 completion:(void (^)(MFAttachment *))arg3;
- (void)insertDocumentWithData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 contentID:(NSString *)arg4;
- (void)insertDocumentWithURL:(NSURL *)arg1 isDrawingFile:(_Bool)arg2;
- (void)insertPhotoOrVideoWithInfoDictionary:(NSDictionary *)arg1;
- (void)changeQuoteLevel:(long long)arg1;
- (void)layoutWithMinimumSize;
- (void)updateInputAssistantItem;
- (void)endPreventingLayout;
- (void)beginPreventingLayout;
- (void)replaceImagesIfNecessary;
- (void)setCaretPosition:(unsigned long long)arg1;
- (struct _NSRange)selectedRange;
- (struct CGRect)rectOfElementWithID:(NSString *)arg1;
- (MFFuture *)htmlString;
- (void)getHTMLStringsAttachmentsCharsetsAndPlainTextAlternative:(void (^)(NSString *, NSArray *, NSArray *, MFPlainTextDocument *))arg1;
- (MFFuture *)plainTextContent;
- (MFFuture *)containsRichText;
- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(_Bool)arg1;
- (void)appendOrReplace:(NSString *)arg1 withMarkupString:(NSString *)arg2 quote:(_Bool)arg3;
- (void)appendMarkupString:(NSString *)arg1 quote:(_Bool)arg2;
- (void)prependMarkupString:(NSString *)arg1 quote:(_Bool)arg2;
- (void)prependPreamble:(NSString *)arg1;
- (void)prependString:(NSString *)arg1;
- (void)setAttachmentURLsToBeReplacedWithFilename:(NSArray *)arg1;
- (void)unscaleImages;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (void)setPrefersFirstLineSelection;
- (void)setMarkupString:(NSString *)arg1 quote:(_Bool)arg2;
- (void)setMarkupString:(NSString *)arg1;
@end

