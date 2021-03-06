//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MPSCore/MPSImage.h>

@interface MPSTemporaryImage : MPSImage
{
    unsigned long long _readCount;
}

+ (void)prefetchStorageWithCommandBuffer:(id)arg1 imageDescriptorList:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 textureDescriptor:(id)arg2;
+ (id)temporaryImageWithCommandBuffer:(id)arg1 imageDescriptor:(id)arg2;
+ (id)defaultAllocator;
@property(nonatomic) unsigned long long readCount; // @synthesize readCount=_readCount;
- (id)debugDescription;
- (void)dealloc;
- (unsigned long long)setPurgeableState:(unsigned long long)arg1;

@end

