//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/MFOutgoingMessageContent.h>

@class MFPlainTextDocument, NSArray;

@interface MFOutgoingRichtextMessageContent : MFOutgoingMessageContent
{
    _Bool _textPartsAreHTML;
    MFPlainTextDocument *_plaintextAlternative;
    NSArray *_mixedContent;
}

@property(retain, nonatomic) NSArray *mixedContent; // @synthesize mixedContent=_mixedContent;
@property(retain, nonatomic) MFPlainTextDocument *plaintextAlternative; // @synthesize plaintextAlternative=_plaintextAlternative;
@property(nonatomic) _Bool textPartsAreHTML; // @synthesize textPartsAreHTML=_textPartsAreHTML;
- (id)richtextContent;
- (id)copy;
- (void)dealloc;

@end

