//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFMimePart.h>

@interface MFMailMimePart : MFMimePart
{
}

+ (Class)attachmentClass;
+ (_Bool)isRecognizedClassForContent:(id)arg1;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4 isComplete:(_Bool *)arg5;
- (_Bool)_shouldContinueDecodingProcess;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(_Bool)arg3;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id *)arg2;
- (id)fileWrapperForcingDownload:(_Bool)arg1;
- (id)decodeMultipartAppledouble;
- (id)decodeTextCalendar;
- (id)decodeTextPlain;
- (id)htmlContent;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)htmlContentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)decodeTextHtml;
- (id)decodeTextEnriched;
- (id)decodeTextRichtext;
- (id)decodeMessageExternal_body;
- (id)decodeMessagePartial;
- (id)decodeMessageRfc822;
- (id)decodeMessageDelivery_status;

@end

