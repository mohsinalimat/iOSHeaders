//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseCollectionViewConfiguration.h>

@class MusicEntityCollectionViewDescriptor, NSArray;

@interface MusicLibraryBrowseHeterogenousCollectionViewConfiguration : MusicLibraryBrowseCollectionViewConfiguration
{
    NSArray *_libraryViewConfigurations;
}

@property(readonly, nonatomic) NSArray *libraryViewConfigurations; // @synthesize libraryViewConfigurations=_libraryViewConfigurations;
- (void).cxx_destruct;
- (id)libraryViewConfigurationForSection:(unsigned long long)arg1;
- (id)collectionViewDescriptorForSection:(unsigned long long)arg1 traitCollection:(id)arg2;
- (id)initWithLibraryViewConfigurations:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) MusicEntityCollectionViewDescriptor *entityCollectionViewDescriptor; // @dynamic entityCollectionViewDescriptor;

@end

