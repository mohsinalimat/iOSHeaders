//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraTLVBase.h>

#import <HomeKitDaemon/HMDCameraTLVCreateParse-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSArray;

@interface HMDSupportedRTPConfiguration : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding>
{
    NSArray *_srtpCryptoSuites;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *srtpCryptoSuites; // @synthesize srtpCryptoSuites=_srtpCryptoSuites;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)tlvData;
- (_Bool)_parseFromTLVData;
- (id)initWithCryptoSuites:(id)arg1;

@end

