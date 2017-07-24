//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPartialNetworkDataConsumer, MFWeakReferenceHolder, NSData, NSMutableDictionary, NSString, NSURL;

@interface MFMimePart : NSObject
{
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange _range;
    MFWeakReferenceHolder *_parent;
    MFWeakReferenceHolder *_body;
    MFMimePart *_nextPart;
    NSURL *_partURL;
    NSURL *_parentPartURL;
    MFPartialNetworkDataConsumer *_partialDataConsumer;
    NSData *_fullData;
    MFWeakReferenceHolder *_decodedData;
}

+ (_Bool)isRecognizedClassForContent:(id)arg1;
+ (Class)attachmentClass;
+ (_Bool)parseContentTypeHeader:(id)arg1 type:(id *)arg2 subtype:(id *)arg3;
+ (_Bool)parseContentTypeHeader:(id)arg1 type:(id *)arg2 subtype:(id *)arg3 info:(id *)arg4;
+ (void)initialize;
- (void)setIsGenerated:(_Bool)arg1;
- (_Bool)isGenerated;
- (id)chosenAlternativePart;
- (id)partURL;
- (id)attachmentURLs;
- (id)attachments;
- (void)getNumberOfAttachments:(unsigned int *)arg1 isSigned:(_Bool *)arg2 isEncrypted:(_Bool *)arg3;
- (unsigned int)numberOfAttachments;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(_Bool)arg3;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4 isComplete:(_Bool *)arg5;
- (_Bool)_shouldContinueDecodingProcess;
- (id)bodyDataForcingDownload:(_Bool)arg1;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 isComplete:(_Bool *)arg4;
- (void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 isComplete:(_Bool *)arg4 decoded:(id *)arg5;
- (_Bool)_hasCompleteBodyDataToOffset:(unsigned long long)arg1;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(_Bool)arg3;
- (id)fileWrapper;
- (id)fileWrapperForcingDownload:(_Bool)arg1;
- (void)download;
- (void)configureFileWrapper:(id)arg1;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id *)arg2;
- (void)clearCachedDescryptedMessageBody;
- (id)decryptedMessageBodyIsEncrypted:(_Bool *)arg1 isSigned:(_Bool *)arg2;
- (id)textHtmlPart;
- (id)signedData;
- (id)alternativeAtIndex:(long long)arg1;
- (long long)numberOfAlternatives;
- (id)startPart;
- (unsigned long long)totalTextSize;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(_Bool)arg2 isSigned:(_Bool)arg3;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (id)rfc822DecodedMessageBody;
- (_Bool)usesKnownSignatureProtocol;
- (_Bool)hasValidMultipartSignedContentType;
- (_Bool)isHTML;
- (_Bool)isRich;
- (_Bool)isAttachment;
- (_Bool)shouldConsiderInlineOverridingExchangeServer;
- (id)_partThatIsAttachment;
- (_Bool)isReadableText;
- (unsigned int)approximateRawSize;
- (unsigned int)textEncoding;
- (id)attachmentFilename;
- (id)description;
- (void)setMimeBody:(id)arg1;
- (id)mimeBody;
- (id)decodedDataForData:(id)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (struct _NSRange)range;
- (void)addSubpart:(id)arg1;
- (void)setSubparts:(id)arg1;
- (id)subpartAtIndex:(long long)arg1;
- (id)subparts;
- (id)nextSiblingPart;
- (id)firstChildPart;
- (id)parentPart;
- (void)setLanguages:(id)arg1;
- (id)languages;
- (void)setContentLocation:(id)arg1;
- (id)contentLocation;
- (void)setContentID:(id)arg1;
- (id)contentID;
- (void)setContentDescription:(id)arg1;
- (id)contentDescription;
- (id)dispositionParameterKeys;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (id)dispositionParameterForKey:(id)arg1;
- (void)setDisposition:(id)arg1;
- (id)disposition;
- (void)setContentTransferEncoding:(id)arg1;
- (id)contentTransferEncoding;
- (id)preservedHeaderValueForKey:(id)arg1;
- (id)bodyParameterKeys;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (id)bodyParameterForKey:(id)arg1;
- (_Bool)hasContentType:(id)arg1 subtype:(id)arg2;
- (void)setSubtype:(id)arg1;
- (id)subtype;
- (void)setType:(id)arg1;
- (id)type;
- (id)init;
- (void)dealloc;
- (_Bool)parseMimeBodyDownloadIfNecessary:(_Bool)arg1;
- (_Bool)parseMimeBody;
- (id)partNumber;
- (_Bool)parseIMAPPropertyList:(id)arg1;
- (void)decodeIfNecessary;
- (id)bodyData;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemForcingDownload:(_Bool)arg1;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4;
- (_Bool)hasContents;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(_Bool)arg3 asHTML:(_Bool)arg4 isComplete:(_Bool *)arg5;
- (void)_contents:(id *)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long *)arg3 downloadIfNecessary:(_Bool)arg4 asHTML:(_Bool)arg5 isComplete:(_Bool *)arg6;
- (id)decodeText;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;

@end

