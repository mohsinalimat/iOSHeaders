//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NeutrinoCore/NUJSProxy.h>

#import <NeutrinoCore/NUJSCGImageMetadataExport-Protocol.h>

@interface NUJSCGImageMetadata : NUJSProxy <NUJSCGImageMetadataExport>
{
}

- (id)nu_unwrapJSValue;
@property(readonly) const struct CGImageMetadata *metadata;
- (id)initWithCGImageMetadata:(struct CGImageMetadata *)arg1 context:(id)arg2;
- (id)initWithRepresentedObject:(id)arg1 context:(id)arg2;

@end

