//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MusicStoreBrowseSectionUniformContentItemTypeResolver : NSObject
{
    _Bool _hasValidUniformContentItemType;
    struct map<MusicStoreBrowseDetailedContentItemType, unsigned long, std::__1::less<MusicStoreBrowseDetailedContentItemType>, std::__1::allocator<std::__1::pair<const MusicStoreBrowseDetailedContentItemType, unsigned long>>> _contentItemTypeOccurrences;
    unsigned long long _totalNumberOfOccurrences;
    long long _uniformContentItemType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)uniformContentItemType;
- (void)addContentItemType:(long long)arg1;

@end
