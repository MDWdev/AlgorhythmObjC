//
//  PlaylistDetailViewController.m
//  algorhythm
//
//  Created by Melissa on 12/8/15.
//  Copyright © 2015 Melissa Webster. All rights reserved.
//

#import "PlaylistDetailViewController.h"
#import "Playlist.h"

@interface PlaylistDetailViewController ()

@end

@implementation PlaylistDetailViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    if (self.playlist) {
        self.playlistCoverImage.image = self.playlist.playlistIconLarge;
        self.playlistCoverImage.backgroundColor = self.playlist.backgroundColor;
        self.playlistTitle.text = self.playlist.playlistTitle;
        self.playlistDescription.text = self.playlist.playlistDescription;
        
        self.playlistArtist0.text = self.playlist.playlistArtist[0];
        self.playlistArtist1.text = self.playlist.playlistArtist[1];
        self.playlistArtist2.text = self.playlist.playlistArtist[2];
        self.playlistArtist3.text = self.playlist.playlistArtist[3];
        self.playlistArtist4.text = self.playlist.playlistArtist[4];
        self.playlistArtist5.text = self.playlist.playlistArtist[5];
   
    }
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
