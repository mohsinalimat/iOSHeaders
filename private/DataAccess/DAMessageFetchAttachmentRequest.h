//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject
{
    NSString *_messageID;
    NSString *_attachmentName;
}

@property(copy, nonatomic) NSString *attachmentName; // @synthesize attachmentName=_attachmentName;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAttachmentName:(id)arg1 andMessageServerID:(id)arg2;

@end

