//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPDecoderDataInfo-Protocol.h>

@class NSString, TSPDigest;

__attribute__((visibility("hidden")))
@interface TSPDecoderDataInfo : NSObject <TSPDecoderDataInfo>
{
    TSPDigest *_digest;
    NSString *_preferredFilename;
    NSString *_externalFilePath;
    NSString *_documentResourceLocator;
    long long _identifier;
}

@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *documentResourceLocator; // @synthesize documentResourceLocator=_documentResourceLocator;
@property(readonly, nonatomic) NSString *externalFilePath; // @synthesize externalFilePath=_externalFilePath;
@property(readonly, nonatomic) NSString *preferredFilename; // @synthesize preferredFilename=_preferredFilename;
@property(readonly, nonatomic) TSPDigest *digest; // @synthesize digest=_digest;
- (void).cxx_destruct;
- (id)initWithMessage:(const struct DataInfo *)arg1;
- (id)initWithIdentifier:(long long)arg1 digest:(id)arg2 preferredFilename:(id)arg3 documentResourceLocator:(id)arg4 externalFilePath:(id)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

