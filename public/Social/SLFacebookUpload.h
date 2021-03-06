//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Social/NSSecureCoding-Protocol.h>

@class NSString;

@interface SLFacebookUpload : NSObject <NSSecureCoding>
{
    NSString *_uploadID;
    long long _uploadType;
    unsigned long long _totalBytes;
    unsigned long long _transferredBytes;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long transferredBytes; // @synthesize transferredBytes=_transferredBytes;
@property(nonatomic) unsigned long long totalBytes; // @synthesize totalBytes=_totalBytes;
@property(nonatomic) long long uploadType; // @synthesize uploadType=_uploadType;
@property(retain, nonatomic) NSString *uploadID; // @synthesize uploadID=_uploadID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

