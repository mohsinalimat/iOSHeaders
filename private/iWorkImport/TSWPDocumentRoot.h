//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/TSKDocumentRoot.h>

#import <iWorkImport/TSWPObjectIndex-Protocol.h>

@class EQKitEnvironment, NSUUID;

__attribute__((visibility("hidden")))
@interface TSWPDocumentRoot : TSKDocumentRoot <TSWPObjectIndex>
{
    _Bool _didRemoveMissingAttachments;
    NSUUID *_uuid;
}

@property(nonatomic) _Bool didRemoveMissingAttachments; // @synthesize didRemoveMissingAttachments=_didRemoveMissingAttachments;
- (double)bodyWidth;
- (id)documentId;
@property(readonly, nonatomic) _Bool supportHeaderFooterParagraphAlignmentInInspectors;
- (int)verticalAlignmentForTextStorage:(id)arg1;
- (int)naturalAlignmentAtCharIndex:(unsigned long long)arg1 inTextStorage:(id)arg2;
@property(readonly, nonatomic, getter=isChangeTrackingEnabled) _Bool changeTrackingEnabled;
- (_Bool)isDrawableOnPageMaster:(id)arg1;
- (id)flowInfoContainer;
@property(readonly, nonatomic) double stickyCommentScaleMultiplier;
- (_Bool)cellCommentsAllowedOnInfo:(id)arg1;
@property(readonly, nonatomic) EQKitEnvironment *equationEnvironment;
- (id)unavailableDocumentFonts;
- (id)documentTSWPFontObjects;
- (id)documentFonts;
- (id)p_fontsInStylesheetUsingBlock:(CDUnknownBlockType)arg1;
- (_Bool)useLigatures;
- (struct __CFLocale *)hyphenationLocale;
- (_Bool)shouldHyphenate;
- (id)changeVisibility;
- (id)changeSessionManagerForModel:(id)arg1;
- (void)willClose;
- (void)documentDidLoad;

@end

