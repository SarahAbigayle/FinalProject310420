package com.example.bulletjournal;

import androidx.appcompat.app.AppCompatActivity;

import android.content.Intent;
import android.os.Bundle;

import android.view.View;


public class Journals extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_journals);


    }
    public void ViewToDoList(View view)
    {
        Intent intent = new Intent(this,ToDoList.class);
        startActivity(intent);

    }
}


