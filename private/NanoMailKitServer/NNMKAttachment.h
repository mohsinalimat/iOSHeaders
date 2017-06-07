//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSTextAttachment.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSString;

@interface NNMKAttachment : NSTextAttachment <NSSecureCoding>
{
    NSString *_contentId;
    NSString *_fileName;
    unsigned long long _fileSize;
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSString *contentId; // @synthesize contentId=_contentId;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

